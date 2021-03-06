//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CGenGFComplexityMatrixProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface CGenGFComplexityMatrix : NSObject <NSCoding, CGenGFComplexityMatrixProtocol>
{
    NSMutableDictionary *_matrices;
}

+ (id)sharedComplexityMatrix;
- (void).cxx_destruct;
- (id)description;
- (id)familyNames;
- (_Bool)complexityForFamilyName:(id)arg1 addOnName:(id)arg2 outValue:(float *)arg3;
- (_Bool)importCSV:(id)arg1 forFamily:(id)arg2;
- (_Bool)importFromFolder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

