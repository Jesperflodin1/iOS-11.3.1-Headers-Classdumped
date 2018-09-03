//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;

@interface FIRAPersistedConfig : NSObject
{
    NSString *_name;
    NSUserDefaults *_userDefaults;
    long long _excludeBackupOnceToken;
}

- (void).cxx_destruct;
- (void)synchronizeToDisk;
- (void)scheduleSynchronizeToDisk;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 userDefault:(id)arg2;
- (long long)int64ForKey:(id)arg1;
- (id)preferencesFilePath;
@property(nonatomic) double engagementTimeBeforeSessionStart;
@property(nonatomic) double lastEngagementEndClockTime;
@property(nonatomic) _Bool startNewSession;
@property(copy, nonatomic) NSString *configServerLastModifiedString;
@property(nonatomic) double lastMonitorDataSampledTimestamp;
@property(readonly, nonatomic) double midnightOffset;
@property(copy, nonatomic, setter=setOSVersion:) NSString *osVersion;
@property(copy, nonatomic) NSString *appVersion;
@property(nonatomic) double lastFailedUploadTimestamp;
@property(nonatomic) double lastSuccessfulUploadTimestamp;
@property(nonatomic) double lastBackoffTimestamp;
@property(readonly, nonatomic) long long measurementEnabledState;
@property(copy, nonatomic) NSString *hashedIDFA;
@property(copy, nonatomic) NSString *appIDFromGMP;
@property(copy, nonatomic) NSString *appInstanceID;
@property(nonatomic) double lastDeleteStaleBundlesTimestamp;
- (void)clearValues;
- (id)initWithSuiteName:(id)arg1;

@end
