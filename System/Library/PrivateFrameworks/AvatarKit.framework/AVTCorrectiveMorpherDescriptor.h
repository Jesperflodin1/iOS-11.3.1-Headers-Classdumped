/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode, SCNMorpher;

@interface AVTCorrectiveMorpherDescriptor : NSObject {

	SCNNode* _readMorpherNode;
	SCNMorpher* _writeMorpher;
	long long _correctiveIndex;
	long long _target0Index;
	long long _target1Index;
	long long _target2Index;
	long long _target3Index;
	unsigned long long _targetCount;

}

@property (assign,nonatomic) SCNNode * readMorpherNode;                   //@synthesize readMorpherNode=_readMorpherNode - In the implementation block
@property (assign,nonatomic) SCNMorpher * writeMorpher;                   //@synthesize writeMorpher=_writeMorpher - In the implementation block
@property (assign,nonatomic) long long correctiveIndex;                   //@synthesize correctiveIndex=_correctiveIndex - In the implementation block
@property (assign,nonatomic) long long target0Index;                      //@synthesize target0Index=_target0Index - In the implementation block
@property (assign,nonatomic) long long target1Index;                      //@synthesize target1Index=_target1Index - In the implementation block
@property (assign,nonatomic) long long target2Index;                      //@synthesize target2Index=_target2Index - In the implementation block
@property (assign,nonatomic) long long target3Index;                      //@synthesize target3Index=_target3Index - In the implementation block
@property (assign,nonatomic) unsigned long long targetCount;              //@synthesize targetCount=_targetCount - In the implementation block
-(SCNMorpher *)writeMorpher;
-(void)setWriteMorpher:(SCNMorpher *)arg1 ;
-(SCNNode *)readMorpherNode;
-(void)setReadMorpherNode:(SCNNode *)arg1 ;
-(long long)correctiveIndex;
-(void)setCorrectiveIndex:(long long)arg1 ;
-(long long)target0Index;
-(void)setTarget0Index:(long long)arg1 ;
-(long long)target1Index;
-(void)setTarget1Index:(long long)arg1 ;
-(long long)target2Index;
-(void)setTarget2Index:(long long)arg1 ;
-(long long)target3Index;
-(void)setTarget3Index:(long long)arg1 ;
-(unsigned long long)targetCount;
-(void)setTargetCount:(unsigned long long)arg1 ;
@end
