//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MABaseplateParameterMapping.h"

@interface MABaseplateParameterMapping (LgBaseplateParameterMapping)
+ (id)baseplateMappingWithChannelParameterIndex:(long long)arg1;
+ (void)load;
- (void)_setParameterIndex:(long long)arg1;
- (long long)index;
- (id)splicedStringForLongValue:(long long)arg1 addUnit:(_Bool)arg2;
- (id)name;
- (unsigned long long)controlFlags;
- (long long)longValue;
- (long long)type;
- (long long)longValueForString:(id)arg1;
- (id)editingStringForLongValue:(long long)arg1;
- (id)initWithChannelParameterIndex:(long long)arg1;
@end

