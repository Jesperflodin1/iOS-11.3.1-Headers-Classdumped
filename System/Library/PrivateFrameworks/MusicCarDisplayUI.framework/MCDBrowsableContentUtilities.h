/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject {

	NSArray* _nowPlayingIdentifiers;

}

@property (nonatomic,retain) NSArray * nowPlayingIdentifiers;                 //@synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * firstPartyAppBundleIDs; 
+(id)sharedInstance;
-(void)setNowPlayingIdentifiers:(NSArray *)arg1 ;
-(NSArray *)nowPlayingIdentifiers;
-(NSArray *)firstPartyAppBundleIDs;
@end

