//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdPlacementDefinition, NSArray, NSString;

@interface FBAdPlacement : NSObject
{
    long long _code;
    NSString *_message;
    FBAdPlacementDefinition *_definition;
    NSArray *_adCandidates;
}

@property(retain, nonatomic) NSArray *adCandidates; // @synthesize adCandidates=_adCandidates;
@property(retain, nonatomic) FBAdPlacementDefinition *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCode:(long long)arg1 message:(id)arg2 definition:(id)arg3 adCandidates:(id)arg4;

@end

