//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface GADNetwork : NSObject
{
    unsigned long long _networkType;
    unsigned long long _lastKnownNetworkType;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_enableCheckingQueue;
    struct __SCNetworkReachability *_networkReachabilityRef;
    id <NSObject> _radioAccessTechnologyChangeObserver;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
    NSString *_radioAccessTechnology;
    NSString *_lastKnownRadioAccessTechnology;
    NSString *_userAgentString;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *userAgentString;
- (void)setRadioAccessTechnology:(id)arg1;
- (void)setNetworkTypeFromFlags:(unsigned int)arg1;
- (void)setNetworkType:(unsigned long long)arg1;
- (id)requestDictionary;
- (void)enableRadioAccessTechnologyChecking;
- (void)dealloc;
- (id)init;

@end

