//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MAApplicationInfo : NSObject
{
    NSString *_appName;
    NSString *_displayName;
    NSString *_compactName;
    NSString *_companyName;
    NSString *_platform;
    long long _majorVersion;
    long long _subVersion;
    long long _releaseVersion;
    double _CFBundleVersion;
    NSString *_shortVersionString;
    NSString *_fullVersionString;
}

+ (id)buildInfo;
+ (id)sharedInstance;
@property(readonly) NSString *fullVersionString; // @synthesize fullVersionString=_fullVersionString;
@property(readonly) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly) double CFBundleVersion; // @synthesize CFBundleVersion=_CFBundleVersion;
@property(readonly) long long releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(readonly) long long subVersion; // @synthesize subVersion=_subVersion;
@property(readonly) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
@property(readonly) NSString *companyName; // @synthesize companyName=_companyName;
@property(readonly) NSString *compactName; // @synthesize compactName=_compactName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)init;

@end
