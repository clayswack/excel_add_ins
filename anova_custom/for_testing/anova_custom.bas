Dim MCLUtil As Object
Dim bModuleInitialized As Boolean
Dim Class1 As Object 

Private Sub InitModule()
    If Not bModuleInitialized Then
        On Error GoTo Handle_Error
        If MCLUtil Is Nothing Then
            Set MCLUtil = CreateObject("MWComUtil.MWUtil9.0")
        End If
        Call MCLUtil.MWInitApplication(Application)
        
        bModuleInitialized = True
        Exit Sub
Handle_Error:
        bModuleInitialized = False
    End If
End Sub

Function anova_custom(Optional x As Variant, Optional y As Variant) As Variant

    On Error GoTo Handle_Error

    Call InitModule()

    If Class1 Is Nothing Then
        Set Class1 = CreateObject("anova_custom.Class1.1_0")
    End If

    Call Class1.anova_custom(x, y)
    anova_custom = Empty

    Exit Function
Handle_Error:
    anova_custom = "Error in " & Err.Source & ": " & Err.Description
End Function
