/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {

	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	BOOL mTransformChanged;
	BOOL mProjectionChanged;

}

@property (nonatomic,readonly) const tmat4x4<float>* current; 
@property (nonatomic,readonly) const tmat4x4<float>* projection; 
@property (nonatomic,readonly) BOOL transformChanged; 
@property (nonatomic,readonly) BOOL projectionChanged; 
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)pushMatrix;
-(void)popMatrix;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(void)resetChangeFlags;
-(id)normalizedViewAll;
-(BOOL)transformChanged;
-(BOOL)projectionChanged;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(const tmat4x4<float>*)current;
-(const tmat4x4<float>*)projection;
-(void)scale:(tvec3<float>*)arg1 ;
@end

