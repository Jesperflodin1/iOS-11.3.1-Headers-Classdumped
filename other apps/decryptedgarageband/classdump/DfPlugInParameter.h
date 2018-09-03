//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfPlugIn;

@interface DfPlugInParameter : NSObject
{
    DfPlugIn *m_plugIn;
    long long m_paramID;
    long long m_automatable;
    long long m_automated;
}

+ (id)parameterWithPlugIn:(id)arg1 andParamID:(long long)arg2;
- (void).cxx_destruct;
- (id)description;
- (int)setAutomated:(_Bool)arg1;
- (_Bool)isAutomated;
- (_Bool)isAutomatable;
- (long long)parameterID;
- (id)plugIn;
- (void)dealloc;
- (id)initWithPlugIn:(id)arg1 andParamID:(long long)arg2;

@end

