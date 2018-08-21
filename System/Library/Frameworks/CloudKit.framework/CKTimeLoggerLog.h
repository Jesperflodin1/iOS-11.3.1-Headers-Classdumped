/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface CKTimeLoggerLog : NSObject <NSSecureCoding> {

	NSString* _type;
	double _beginTime;
	double _endTime;
	NSString* _beginningMessage;
	NSString* _endingMessage;
	NSMutableArray* _pauseRecords;

}

@property (nonatomic,retain) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double beginTime;                           //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * beginningMessage;                //@synthesize beginningMessage=_beginningMessage - In the implementation block
@property (nonatomic,retain) NSString * endingMessage;                   //@synthesize endingMessage=_endingMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * pauseRecords;              //@synthesize pauseRecords=_pauseRecords - In the implementation block
@property (readonly) double elapsedTime; 
+(BOOL)supportsSecureCoding;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(double)elapsedTime;
-(void)setBeginningMessage:(NSString *)arg1 ;
-(void)setEndingMessage:(NSString *)arg1 ;
-(void)togglePauseWithTime:(double)arg1 message:(id)arg2 ;
-(void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(BOOL)arg3 ;
-(void)setPauseRecords:(NSMutableArray *)arg1 ;
-(NSString *)beginningMessage;
-(NSString *)endingMessage;
-(NSMutableArray *)pauseRecords;
@end

