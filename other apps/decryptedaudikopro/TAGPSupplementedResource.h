//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray, TAGPResource;

@interface TAGPSupplementedResource : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(nonatomic) _Bool hasFingerprint; // @dynamic hasFingerprint;
@property(nonatomic) _Bool hasResource; // @dynamic hasResource;
@property(nonatomic) _Bool hasSupplementalArray; // @dynamic hasSupplementalArray;
@property(retain, nonatomic) TAGPResource *resource; // @dynamic resource;
@property(retain, nonatomic) TAGPBMutableArray *supplementalArray; // @dynamic supplementalArray;

@end

