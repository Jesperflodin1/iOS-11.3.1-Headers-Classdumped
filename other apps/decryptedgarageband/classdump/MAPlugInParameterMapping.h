//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAbstractChannelParameterMapping.h"

@interface MAPlugInParameterMapping : MAAbstractChannelParameterMapping
{
    long long _cachedMaxLongValue;
    unsigned long long _controlFlags;
    _Bool _didSetControlFlags;
}

+ (Class)_storageClass;
+ (void)load;
+ (id)unitToUnicode:(id)arg1;
+ (id)plugInMappingWithSlot:(long long)arg1 isMIDISlot:(_Bool)arg2 andParameterIndex:(long long)arg3;
@property(readonly, nonatomic) _Bool isMIDISlot;
@property(nonatomic) long long slot;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)rangeHighString;
- (id)rangeLowString;
- (id)displayName;
- (unsigned int)pluginID;
- (id)pluginName;
- (unsigned long long)controlFlags;
- (long long)longValueForString:(id)arg1;
- (id)stringForLongValue:(long long)arg1;
- (id)stringForLongValue:(long long)arg1 addUnit:(_Bool)arg2;
- (id)logicOnlyPath;
- (id)name;
- (long long)longValue;
- (long long)maxLongValue;
- (long long)type;
- (id)initWithSlot:(long long)arg1 isMIDISlot:(_Bool)arg2 andParameterIndex:(long long)arg3;
- (void)_setParameterIndex:(long long)arg1;
- (long long)maxLongValueForAudioPlugin:(struct AUDIOPLUGIN *)arg1;
- (long long)rangeHighForAudioPlugin:(struct AUDIOPLUGIN *)arg1;
- (long long)rangeLowForAudioPlugin:(struct AUDIOPLUGIN *)arg1;

// Remaining properties
@property long long rangeHigh; // @dynamic rangeHigh;
@property long long rangeLow; // @dynamic rangeLow;

@end

