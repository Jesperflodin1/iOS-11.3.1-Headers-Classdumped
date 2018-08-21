/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding> {

	NSData* _fetchData;
	long long _resultType;
	BOOL _secure;

}

@property (retain,readonly) NSData * fetchData;              //@synthesize fetchData=_fetchData - In the implementation block
@property (readonly) long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (readonly) BOOL secure;                            //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg1 ;
-(NSData *)fetchData;
-(BOOL)secure;
-(long long)resultType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

