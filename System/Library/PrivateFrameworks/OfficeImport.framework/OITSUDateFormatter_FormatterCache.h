/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface OITSUDateFormatter_FormatterCache : NSObject {

	NSLock* _dateFormatterCacheLock;
	NSMutableDictionary* _dateFormatterCache;

}
+(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
@end

