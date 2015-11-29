/*===============================================================================
 Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.
 
 Vuforia is a trademark of QUALCOMM Incorporated, registered in the United States
 and other countries. Trademarks of QUALCOMM Incorporated are used with permission.
 ===============================================================================*/

@protocol SampleGLResourceHandler

@required
- (void) freeOpenGLESResources;
- (void) finishOpenGLESCommands;

@end