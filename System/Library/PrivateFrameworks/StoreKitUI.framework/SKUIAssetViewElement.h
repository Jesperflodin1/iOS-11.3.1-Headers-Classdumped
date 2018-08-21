/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL;

@interface SKUIAssetViewElement : SKUIViewElement {

	double _initialPlaybackTime;
	long long _itemIdentifier;
	NSString* _secureKeyDeliveryType;
	double _playbackDuration;
	NSURL* _url;
	BOOL _ITunesStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;

}

@property (assign,nonatomic) double initialPlaybackTime;                             //@synthesize initialPlaybackTime=_initialPlaybackTime - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * secureKeyDeliveryType;                //@synthesize secureKeyDeliveryType=_secureKeyDeliveryType - In the implementation block
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream;              //@synthesize ITunesStream=_ITunesStream - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyCertificateURL;                     //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyServerURL;                          //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (nonatomic,readonly) double playbackDuration;                              //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                          //@synthesize url=_url - In the implementation block
-(NSURL *)URL;
-(double)playbackDuration;
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(double)initialPlaybackTime;
-(NSString *)secureKeyDeliveryType;
-(BOOL)isITunesStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

