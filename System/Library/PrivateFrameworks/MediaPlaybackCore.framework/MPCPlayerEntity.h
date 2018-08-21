/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlayerItemContainer, NSString, NSDictionary, MPModelPlayEvent;

@interface MPCPlayerEntity : NSObject {

	BOOL _explicit;
	MPCPlayerItemContainer* _container;
	NSString* _title;
	NSDictionary* _userInfo;
	MPModelPlayEvent* _modelPlayEventRepresentation;

}

@property (nonatomic,readonly) MPModelPlayEvent * modelPlayEventRepresentation;              //@synthesize modelPlayEventRepresentation=_modelPlayEventRepresentation - In the implementation block
@property (assign,nonatomic,__weak) MPCPlayerItemContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isExplicit,nonatomic,readonly) BOOL explicit;                              //@synthesize explicit=_explicit - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(MPCPlayerItemContainer *)container;
-(void)setContainer:(MPCPlayerItemContainer *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)artworkCatalog;
-(BOOL)isExplicit;
-(MPModelPlayEvent *)modelPlayEventRepresentation;
@end

