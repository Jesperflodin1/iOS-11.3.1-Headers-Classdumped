//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAbstractChannelParameterMapping.h"

@interface MAArticulationChannelParameterMapping : MAAbstractChannelParameterMapping
{
}

- (long long)maxLongValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)controlFlags;
- (long long)index;
- (double)savedValue;
- (void)setSavedValue:(double)arg1;
- (long long)longValue;
- (id)name;
- (long long)longValueForString:(id)arg1;
- (id)editingStringForLongValue:(long long)arg1;
- (id)stringForLongValue:(long long)arg1 addUnit:(_Bool)arg2;
- (long long)type;
- (long long)maxLongValue;
@property(readonly) unsigned char articulationID; // @dynamic articulationID;

@end

