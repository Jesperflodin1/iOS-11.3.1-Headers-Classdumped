/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/CLKUIQuad.h>

@class CLKUIGLProgram;

@interface CLKUIGLQuad : CLKUIQuad {

	unsigned _isPrepared : 1;
	unsigned _vertexArray;
	unsigned _vertexBuffer;
	unsigned _primaryTexture;
	unsigned _secondaryTexture;
	CLKUIGLProgram* _program;

}
-(void)_prepare;
-(void)encode;
-(void)_createVertexArray;
-(void)_deleteVertexArray;
-(void)_purge;
@end

