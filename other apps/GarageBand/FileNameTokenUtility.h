//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FileNameTokenUtility : NSObject
{
    _Bool _hasNonDefaultActiveTokens;
    long long _mode;
    NSDate *_date;
    NSMutableArray *_internalActiveTokens;
    NSMutableArray *_internalFactoryTokens;
    NSMutableDictionary *_tokensToDisplayStrings;
    NSMutableDictionary *_tokensToReplacementStrings;
    NSArray *_dateTokens;
    NSMutableDictionary *_tokensToDateFormats;
    NSDictionary *_tokensToAvailableDateFormats;
    NSDictionary *_dateFormatsToAnnotations;
    NSDateFormatter *_dateFormatter;
}

+ (id)tokenByAddingDateFormat:(id)arg1 toToken:(id)arg2;
+ (id)userDefaultsKeyForMode:(long long)arg1;
+ (id)conditionClockString:(id)arg1;
+ (id)conditionTimecodeString:(id)arg1;
+ (_Bool)stringHasReplacementPrefix:(id)arg1;
+ (id)tokenUtilityWithMode:(long long)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) NSDictionary *dateFormatsToAnnotations; // @synthesize dateFormatsToAnnotations=_dateFormatsToAnnotations;
@property(readonly, nonatomic) NSDictionary *tokensToAvailableDateFormats; // @synthesize tokensToAvailableDateFormats=_tokensToAvailableDateFormats;
@property(retain, nonatomic) NSMutableDictionary *tokensToDateFormats; // @synthesize tokensToDateFormats=_tokensToDateFormats;
@property(readonly, nonatomic) NSArray *dateTokens; // @synthesize dateTokens=_dateTokens;
@property(retain, nonatomic) NSMutableDictionary *tokensToReplacementStrings; // @synthesize tokensToReplacementStrings=_tokensToReplacementStrings;
@property(retain, nonatomic) NSMutableDictionary *tokensToDisplayStrings; // @synthesize tokensToDisplayStrings=_tokensToDisplayStrings;
@property(retain, nonatomic) NSMutableArray *internalFactoryTokens; // @synthesize internalFactoryTokens=_internalFactoryTokens;
@property(retain, nonatomic) NSMutableArray *internalActiveTokens; // @synthesize internalActiveTokens=_internalActiveTokens;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool hasNonDefaultActiveTokens; // @synthesize hasNonDefaultActiveTokens=_hasNonDefaultActiveTokens;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)annotationForDateFormat:(id)arg1;
- (id)availableDateFormatsForToken:(id)arg1;
- (id)dateStringForToken:(id)arg1 usingDateFormat:(id)arg2;
- (void)setDateFormat:(id)arg1 forToken:(id)arg2;
- (id)dateFormatForToken:(id)arg1;
- (id)tokenByAddingDateFormatToToken:(id)arg1;
- (void)splitToken:(id)arg1 intoRawToken:(id *)arg2 andDateFormat:(id *)arg3;
- (void)updateDateTokens;
- (void)initializeDateFormats;
- (id)rangeStringForStartClock:(struct TAbsPureClock)arg1 endClock:(struct TAbsPureClock)arg2 song:(const struct CSong *)arg3 usingTime:(_Bool)arg4;
- (id)tokensForPattern:(id)arg1;
- (id)patternForTokens:(id)arg1;
- (id)displayStringForToken:(id)arg1;
- (void)setReplacementStringForRangeUsingStartClock:(struct TAbsPureClock)arg1 endClock:(struct TAbsPureClock)arg2 song:(const struct CSong *)arg3;
- (void)setReplacementString:(id)arg1 forTokenWithID:(id)arg2;
- (void)writeTokensToUserDefaults;
- (_Bool)readTokensFromUserDefaults;
- (void)setDefaultTokensForMode:(long long)arg1;
- (void)setFactoryTokensForMode:(long long)arg1;
@property(readonly, nonatomic) _Bool hasActiveTokens;
@property(readonly, nonatomic) NSString *interpretedString;
@property(readonly, nonatomic) NSArray *factoryTokens;
@property(copy, nonatomic) NSArray *activeTokens;
- (void)setInitialReplacementStringsForFactoryTokens;
- (void)setDisplayStringsForFactoryTokens;
- (id)description;
- (id)initWithMode:(long long)arg1;

@end

