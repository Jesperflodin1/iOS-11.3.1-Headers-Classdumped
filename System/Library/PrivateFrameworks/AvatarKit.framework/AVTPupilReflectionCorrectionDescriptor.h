/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode, SCNMaterial;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject {

	SCNNode* _readMorpherNode;
	SCNMaterial* _leftEyeMaterial;
	SCNMaterial* _rightEyeMaterial;
	long long _leftEyeTargetIndex;
	long long _rightEyeTargetIndex;

}

@property (assign,nonatomic) SCNNode * readMorpherNode;                   //@synthesize readMorpherNode=_readMorpherNode - In the implementation block
@property (assign,nonatomic) SCNMaterial * leftEyeMaterial;               //@synthesize leftEyeMaterial=_leftEyeMaterial - In the implementation block
@property (assign,nonatomic) SCNMaterial * rightEyeMaterial;              //@synthesize rightEyeMaterial=_rightEyeMaterial - In the implementation block
@property (assign,nonatomic) long long leftEyeTargetIndex;                //@synthesize leftEyeTargetIndex=_leftEyeTargetIndex - In the implementation block
@property (assign,nonatomic) long long rightEyeTargetIndex;               //@synthesize rightEyeTargetIndex=_rightEyeTargetIndex - In the implementation block
-(SCNNode *)readMorpherNode;
-(void)setReadMorpherNode:(SCNNode *)arg1 ;
-(SCNMaterial *)leftEyeMaterial;
-(void)setLeftEyeMaterial:(SCNMaterial *)arg1 ;
-(SCNMaterial *)rightEyeMaterial;
-(void)setRightEyeMaterial:(SCNMaterial *)arg1 ;
-(long long)leftEyeTargetIndex;
-(void)setLeftEyeTargetIndex:(long long)arg1 ;
-(long long)rightEyeTargetIndex;
-(void)setRightEyeTargetIndex:(long long)arg1 ;
@end

