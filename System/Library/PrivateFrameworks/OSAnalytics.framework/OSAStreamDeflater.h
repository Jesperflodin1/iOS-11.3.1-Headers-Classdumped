/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OSAnalytics/OSAnalytics-Structs.h>
@interface OSAStreamDeflater : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;
	BOOL _capViolation;

}

@property (assign) BOOL capViolation;              //@synthesize capViolation=_capViolation - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 withCap:(unsigned)arg2 ;
-(BOOL)capViolation;
-(void)setCapViolation:(BOOL)arg1 ;
@end

