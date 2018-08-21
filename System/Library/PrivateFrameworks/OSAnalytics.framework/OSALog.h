/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OSAnalytics/OSAnalytics-Structs.h>
@class NSDictionary, NSString;

@interface OSALog : NSObject {

	_sFILE* _stream;
	NSDictionary* _metaData;
	NSString* _filepath;
	BOOL _preserveFiles;
	BOOL _deleteOnRetire;
	NSString* _bugType;

}

@property (readonly) _sFILE* stream;                       //@synthesize stream=_stream - In the implementation block
@property (readonly) NSDictionary * metaData;              //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * filepath;                  //@synthesize filepath=_filepath - In the implementation block
@property (assign) BOOL deleteOnRetire;                    //@synthesize deleteOnRetire=_deleteOnRetire - In the implementation block
@property (readonly) NSString * bugType;                   //@synthesize bugType=_bugType - In the implementation block
+(unsigned)scanLogs:(id)arg1 from:(id)arg2 ;
+(void)cleanupRetired:(id)arg1 ;
+(id)scanProxies:(id)arg1 ;
+(void)purgeLogs:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)metaData;
-(NSString *)filepath;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 ;
-(void)closeFileStream;
-(void)retire:(const char*)arg1 ;
-(id)getFilenames;
-(BOOL)isReasonableSize:(long long)arg1 forRouting:(id)arg2 ;
-(void)markWithKey:(const char*)arg1 value:(const char*)arg2 ;
-(BOOL)deleteOnRetire;
-(void)setDeleteOnRetire:(BOOL)arg1 ;
-(NSString *)bugType;
-(_sFILE*)stream;
@end

