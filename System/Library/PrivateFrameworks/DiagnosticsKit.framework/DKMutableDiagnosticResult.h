/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <DiagnosticsKit/DKDiagnosticResult.h>

@class NSNumber, NSDictionary, NSArray;

@interface DKMutableDiagnosticResult : DKDiagnosticResult {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;

}

@property (nonatomic,retain) NSNumber * statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * files;                    //@synthesize files=_files - In the implementation block
-(void)setStatusCode:(NSNumber *)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSNumber *)statusCode;
@end

