/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol MapsSuggestionsSourceDelegate;
@class NSString;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {

	id<MapsSuggestionsSourceDelegate> _delegate;
	NSString* _uniqueName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName;                                        //@synthesize uniqueName=_uniqueName - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(id<MapsSuggestionsSourceDelegate>)delegate;
-(void)setDelegate:(id<MapsSuggestionsSourceDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)uniqueName;
-(id)currentBestLocation;
-(double)updateSuggestionEntries;
-(BOOL)canProduceEntriesOfType:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 name:(NSString*)arg2 ;
-(unsigned long long)addOrUpdateMySuggestionEntries:(NSArray*)arg1 deleteMissing:(BOOL)arg2 ;
-(unsigned long long)deleteMyEntries:(NSArray*)arg1 ;
@end

