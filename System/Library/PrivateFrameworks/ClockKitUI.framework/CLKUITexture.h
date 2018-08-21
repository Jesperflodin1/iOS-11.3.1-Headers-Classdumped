/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKUIAtlas, NSString;

@interface CLKUITexture : NSObject {

	CLKUIAtlas* _atlas;
	 _rect;

}

@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) CLKUIAtlas * atlas;                     //@synthesize atlas=_atlas - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly)  rect;                                  //@synthesize rect=_rect - In the implementation block
+(id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 ;
+(id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)status;
-()rect;
-(NSString *)uuid;
-(CLKUIAtlas *)atlas;
-(id)initWithAtlas:(id)arg1 ;
@end

