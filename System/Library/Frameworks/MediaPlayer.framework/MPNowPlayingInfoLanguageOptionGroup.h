/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {

	void* _mrLanguageOptionGroup;

}

@property (nonatomic,readonly) void* mrLanguageOptionGroup;                                         //@synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptions; 
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * defaultLanguageOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection; 
-(void)dealloc;
-(NSArray *)languageOptions;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(BOOL)arg3 ;
-(id)initWithMRLanguageOptionGroup:(void*)arg1 ;
-(void*)mrLanguageOptionGroup;
-(MPNowPlayingInfoLanguageOption *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
@end

