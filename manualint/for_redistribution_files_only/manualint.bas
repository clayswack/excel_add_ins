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

Function manualint(Optional x As Variant, Optional y As Variant, Optional s As Variant,  _
                   Optional e As Variant) As Variant

    On Error GoTo Handle_Error

    Call InitModule()

    If Class1 Is Nothing Then
        Set Class1 = CreateObject("manualint.Class1.1_0")
    End If

    Call Class1.manualint(x, y, s, e)
    manualint = Empty

    Exit Function
Handle_Error:
    manualint = "Error in " & Err.Source & ": " & Err.Description
End Function

