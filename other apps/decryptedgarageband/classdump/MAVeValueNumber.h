//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAVeValue;

@interface MAVeValueNumber : NSObject
{
    _Bool _mutableNumber;
    double _number;
    MAVeValue *_numberValue;
}

+ (id)valueNumberWithNumberValue:(id)arg1;
+ (id)valueNumberWithNumber:(double)arg1 mutableNumber:(_Bool)arg2;
+ (id)valueNumberWithNumber:(double)arg1;
+ (id)valueNumberZero;
@property(retain, nonatomic) MAVeValue *numberValue; // @synthesize numberValue=_numberValue;
@property(nonatomic) _Bool mutableNumber; // @synthesize mutableNumber=_mutableNumber;
- (void).cxx_destruct;
@property(nonatomic) double number; // @synthesize number=_number;
- (void)dealloc;
- (id)initWithNumberValue:(id)arg1;
- (id)initWithNumber:(double)arg1 mutableNumber:(_Bool)arg2;

@end

