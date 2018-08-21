/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SiriCoreSQLiteStatement, NSArray;

@interface SiriCoreSQLiteQuery : NSObject {

	NSString* _string;
	SiriCoreSQLiteStatement* _statement;
	NSArray* _parameters;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) SiriCoreSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parameters;                        //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
-(id)description;
-(NSString *)string;
-(NSArray *)parameters;
-(unsigned long long)options;
-(SiriCoreSQLiteStatement *)statement;
-(id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 options:(unsigned long long)arg4 ;
@end

