/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode, NSString, AVTAsset, AVTComponent;

@interface AVTComponentInstance : NSObject {

	SCNNode* _assetNode;
	NSString* _assetImage;
	AVTAsset* _asset;
	long long _quality;
	long long _variant;
	AVTComponent* _component;

}

@property (readonly) AVTComponent * component;              //@synthesize component=_component - In the implementation block
@property (readonly) SCNNode * assetNode;                   //@synthesize assetNode=_assetNode - In the implementation block
@property (readonly) NSString * assetImage;                 //@synthesize assetImage=_assetImage - In the implementation block
@property (readonly) long long variant;                     //@synthesize variant=_variant - In the implementation block
@property (readonly) long long quality;                     //@synthesize quality=_quality - In the implementation block
+(id)assetNodeWithPath:(id)arg1 ;
-(AVTComponent *)component;
-(void)dealloc;
-(long long)variant;
-(NSString *)assetImage;
-(long long)quality;
-(SCNNode *)assetNode;
-(id)initWithComponent:(id)arg1 assetInfo:(id)arg2 variant:(long long)arg3 quality:(long long)arg4 ;
-(void)updateMaterialsWithComponent:(id)arg1 ;
@end

