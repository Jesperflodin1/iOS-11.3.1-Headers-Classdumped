//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface GADClearcutConfig : NSObject
{
    _Bool _enabled;
    _Bool _useJSCore;
    double _beaconInterval;
    NSURL *_scriptURL;
    NSString *_version;
    NSURL *_baseURL;
    long long _maxBufferedCommandSize;
    NSString *_JSConfig;
}

@property(readonly, copy, nonatomic) NSString *JSConfig; // @synthesize JSConfig=_JSConfig;
@property(readonly, nonatomic) long long maxBufferedCommandSize; // @synthesize maxBufferedCommandSize=_maxBufferedCommandSize;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(readonly, nonatomic) double beaconInterval; // @synthesize beaconInterval=_beaconInterval;
@property(readonly, nonatomic) _Bool useJSCore; // @synthesize useJSCore=_useJSCore;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)init;

@end

