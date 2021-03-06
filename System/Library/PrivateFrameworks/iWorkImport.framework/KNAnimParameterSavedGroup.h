/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface KNAnimParameterSavedGroup : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _version;
	NSMutableDictionary* _parameters;

}

@property (nonatomic,retain) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * version;                              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)parameterForName:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

