//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenInstParameterUpdatePolicy.h"

@interface GenInstParameterUpdatePolicyRelativeControls : GenInstParameterUpdatePolicy
{
    float m_dValue;
}

+ (int)setInitialParameterValue:(id)arg1 forParameter:(id)arg2 parameterID:(id)arg3 paramTemplate:(id)arg4 regionCache:(id)arg5;
+ (float)maxDifferenceOfParameterInCache:(id)arg1 forParameterID:(id)arg2;
- (float)newValue:(float)arg1;
- (void)startUpdateForParam:(id)arg1 paramId:(id)arg2 paramTemplate:(id)arg3 referenceRegionStartValue:(id)arg4;

@end
