/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {

	NSMutableDictionary* _parameters;
	unsigned long long _type;
	id _value;

}
+(BOOL)supportsSecureCoding;
-(id)allParameters;
-(BOOL)isMultiValued;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)value;
-(id)parameters;
-(id)stringValue;
-(void)setParameters:(id)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
-(void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2 ;
-(void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setValueAsProperty:(id)arg1 withRawValue:(const char*)arg2 options:(unsigned long long)arg3 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
-(void)addParametersFromDictionary:(id)arg1 ;
-(id)parameterValueForName:(id)arg1 ;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
@end
