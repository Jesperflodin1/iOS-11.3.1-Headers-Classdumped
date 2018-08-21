/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKPlayEvent, WLKPlayable, WLKBasicContentMetadata, NSString;

@interface WLKContinuationMetadata : NSObject {

	BOOL _isRental;
	BOOL _isPurchase;
	WLKPlayEvent* _playEvent;
	WLKPlayable* _playable;
	WLKBasicContentMetadata* _movieOrShowContent;
	WLKBasicContentMetadata* _currentEpisode;
	WLKBasicContentMetadata* _showParent;
	NSString* _context;
	NSString* _localizedContext;
	NSString* _deleteID;

}

@property (nonatomic,readonly) WLKPlayEvent * playEvent;                                  //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                                    //@synthesize playable=_playable - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * movieOrShowContent;              //@synthesize movieOrShowContent=_movieOrShowContent - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * currentEpisode;                  //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * showParent;                      //@synthesize showParent=_showParent - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedContext;                          //@synthesize localizedContext=_localizedContext - In the implementation block
@property (nonatomic,readonly) BOOL isRental;                                             //@synthesize isRental=_isRental - In the implementation block
@property (nonatomic,readonly) BOOL isPurchase;                                           //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteID;                                  //@synthesize deleteID=_deleteID - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)context;
-(WLKPlayable *)playable;
-(BOOL)isPurchase;
-(WLKPlayEvent *)playEvent;
-(BOOL)isRental;
-(WLKBasicContentMetadata *)movieOrShowContent;
-(WLKBasicContentMetadata *)showParent;
-(NSString *)localizedContext;
-(NSString *)deleteID;
-(WLKBasicContentMetadata *)currentEpisode;
@end
