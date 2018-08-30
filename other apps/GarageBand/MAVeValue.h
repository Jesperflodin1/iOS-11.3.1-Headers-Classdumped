//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MAVeValue : NSObject
{
    _Bool _dirty;
    _Bool _enabled;
    double _defaultValue;
    double _infValue;
    double _maxValue;
    double _minValue;
    double _valueIncrement;
    NSString *_stringValue;
    NSString *_unit;
    double _representedValue;
    CDUnknownBlockType _userReMapping;
    CDUnknownBlockType _userMapping;
    NSMutableDictionary *_userInfo;
}

+ (_Bool)valueID:(id)arg1 isEqualToValueID:(id)arg2;
+ (id)valueWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 defaultValue:(double)arg4 unit:(id)arg5 userMapping:(CDUnknownBlockType)arg6 userReMapping:(CDUnknownBlockType)arg7;
+ (id)valueWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 defaultValue:(double)arg4 unit:(id)arg5;
+ (id)value;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType userMapping; // @synthesize userMapping=_userMapping;
@property(copy, nonatomic) CDUnknownBlockType userReMapping; // @synthesize userReMapping=_userReMapping;
@property(nonatomic) double representedValue; // @synthesize representedValue=_representedValue;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double valueIncrement; // @synthesize valueIncrement=_valueIncrement;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double infValue; // @synthesize infValue=_infValue;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
@property(nonatomic) double normedValue;
@property(nonatomic) double mappedValue;
@property(nonatomic) long long integerValue;
@property(nonatomic) float floatValue;
@property(nonatomic) double doubleValue;
@property(nonatomic) _Bool boolValue;
- (void)resetInfValue;
- (id)description;
- (id)initWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 defaultValue:(double)arg4 unit:(id)arg5 userMapping:(CDUnknownBlockType)arg6 userReMapping:(CDUnknownBlockType)arg7;

@end
