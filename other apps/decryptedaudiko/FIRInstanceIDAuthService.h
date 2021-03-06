//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FIRInstanceIDCheckinService, FIRInstanceIDStore, NSMutableDictionary;

@interface FIRInstanceIDAuthService : NSObject
{
    _Bool _allowMissingAPNSToken;
    _Bool _isCheckinInProgress;
    int _checkinRetryCount;
    FIRInstanceIDStore *_store;
    FIRInstanceIDCheckinService *_checkinService;
    NSMutableDictionary *_IIDAuthTokenBySenderID;
    long long _lastCheckinTimestampSeconds;
    long long _nextScheduledCheckinIntervalSeconds;
}

@property int checkinRetryCount; // @synthesize checkinRetryCount=_checkinRetryCount;
@property long long nextScheduledCheckinIntervalSeconds; // @synthesize nextScheduledCheckinIntervalSeconds=_nextScheduledCheckinIntervalSeconds;
@property long long lastCheckinTimestampSeconds; // @synthesize lastCheckinTimestampSeconds=_lastCheckinTimestampSeconds;
@property _Bool isCheckinInProgress; // @synthesize isCheckinInProgress=_isCheckinInProgress;
@property(retain, nonatomic) NSMutableDictionary *IIDAuthTokenBySenderID; // @synthesize IIDAuthTokenBySenderID=_IIDAuthTokenBySenderID;
@property(retain, nonatomic) FIRInstanceIDCheckinService *checkinService; // @synthesize checkinService=_checkinService;
@property(retain, nonatomic) FIRInstanceIDStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool allowMissingAPNSToken; // @synthesize allowMissingAPNSToken=_allowMissingAPNSToken;
- (void).cxx_destruct;
- (void)saveIIDAuthToken:(id)arg1 forAuthorizedEntity:(id)arg2;
- (id)cachedIIDAuthTokenForAuthorizedEntity:(id)arg1;
- (void)stopCheckinRequest;
- (id)checkinPreferences;
- (id)checkinAuthToken;
- (void)fetchCheckinInfoWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasValidCheckinInfo;
- (long long)calculateNextCheckinRetryIntervalInSeconds;
- (void)doCheckin:(_Bool)arg1;
- (void)scheduleCheckin:(_Bool)arg1;
- (id)initWithStore:(id)arg1;
- (id)initWithCheckinService:(id)arg1 store:(id)arg2;

@end

