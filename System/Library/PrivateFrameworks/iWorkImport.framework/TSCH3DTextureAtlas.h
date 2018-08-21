/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DTextureAtlas : NSObject {

	NSMutableDictionary* mCachedLabels;
	NSMutableArray* mTextures;
	float mSamples;

}

@property (nonatomic,readonly) float samples; 
+(id)atlasWithSamples:(float)arg1 ;
+(id)atlas;
-(id)initWithSamples:(float)arg1 ;
-(tvec3<int>)p_addLabel:(id)arg1 ;
-(tvec2<int>)textureSizeAtIndex:(long long)arg1 ;
-(tvec3<int>)positionForLabel:(id)arg1 ;
-(id)textureAtIndex:(long long)arg1 ;
-(void)dealloc;
-(float)samples;
@end

