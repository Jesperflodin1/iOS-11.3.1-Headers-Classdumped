//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CLSMachOSlice : NSObject
{
    struct CLSMachOSlice _slice;
    NSString *_uuidString;
    NSArray *_linkedDylibs;
    CDStruct_e24ffa00 _minimumOSVersion;
    CDStruct_e24ffa00 _linkedSDKVersion;
}

+ (id)runningSlice;
@property(readonly, nonatomic) CDStruct_e24ffa00 linkedSDKVersion; // @synthesize linkedSDKVersion=_linkedSDKVersion;
@property(readonly, nonatomic) CDStruct_e24ffa00 minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *linkedDylibs;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, copy, nonatomic) NSString *architectureName;
- (id)initWithSlice:(struct CLSMachOSlice *)arg1;

@end

