//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBCachedObject : NSObject
{
    double _expiration;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) double expiration; // @synthesize expiration=_expiration;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 withExpiration:(id)arg2;

@end

