//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface MAChannelID : NSObject <NSCoding, NSCopying>
{
    long long _type;
    unsigned long long _index;
    unsigned long long _aliasIndex;
}

+ (id)channelIDWithType:(long long)arg1 index:(unsigned long long)arg2 aliasIndex:(unsigned long long)arg3;
+ (id)channelIDWithType:(long long)arg1 index:(unsigned long long)arg2;
+ (void)load;
@property(readonly, nonatomic) unsigned long long aliasIndex; // @synthesize aliasIndex=_aliasIndex;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithAliasIndex:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)decode:(id)arg1 unsignedIntForKey:(id)arg2;
- (id)description;
- (id)initWithType:(long long)arg1 index:(unsigned long long)arg2 aliasIndex:(unsigned long long)arg3;
- (id)initWithType:(long long)arg1 index:(unsigned long long)arg2;

@end
