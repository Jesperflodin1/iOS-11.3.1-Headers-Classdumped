//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TAGPBArray, TAGPBMutableArray;

@interface TAGPBField : NSObject
{
    int number_;
    TAGPBMutableArray *mutableVarintList_;
    TAGPBMutableArray *mutableFixed32List_;
    TAGPBMutableArray *mutableFixed64List_;
    TAGPBMutableArray *mutableLengthDelimitedList_;
    TAGPBMutableArray *mutableGroupList_;
}

@property(readonly, nonatomic) int number; // @synthesize number=number_;
@property(readonly, retain, nonatomic) TAGPBArray *groupList; // @synthesize groupList=mutableGroupList_;
@property(readonly, retain, nonatomic) TAGPBArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
@property(readonly, retain, nonatomic) TAGPBArray *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, retain, nonatomic) TAGPBArray *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, retain, nonatomic) TAGPBArray *varintList; // @synthesize varintList=mutableVarintList_;
- (id)description;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (unsigned long long)serializedSize;
- (void)writeToOutput:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

