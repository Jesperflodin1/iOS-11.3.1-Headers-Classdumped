//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SSHBHIDUsage : NSObject
{
    unsigned int _primaryUsage;
    unsigned int _primaryUsagePage;
}

@property(readonly, nonatomic) unsigned int primaryUsagePage; // @synthesize primaryUsagePage=_primaryUsagePage;
@property(readonly, nonatomic) unsigned int primaryUsage; // @synthesize primaryUsage=_primaryUsage;
- (unsigned long long)hash;
- (id)initWithPrimaryUsage:(unsigned int)arg1 primaryUsagePage:(unsigned int)arg2;

@end

