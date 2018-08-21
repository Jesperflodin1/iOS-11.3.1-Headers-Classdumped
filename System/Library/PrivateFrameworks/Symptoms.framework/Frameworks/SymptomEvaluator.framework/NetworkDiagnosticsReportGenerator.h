/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/DiagnosticReportGenerator.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSMutableDictionary* _options;
	NSDictionary* _netDiagsResults;
	NSDate* _reportStart;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;               //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSDictionary * netDiagsResults;              //@synthesize netDiagsResults=_netDiagsResults - In the implementation block
@property (nonatomic,retain) NSDate * reportStart;                        //@synthesize reportStart=_reportStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)options;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)setNetDiagsResults:(NSDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTaskWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)netDiagsResults;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(BOOL)startReportGeneration;
-(id)createDefaultTaskDictionaryWithTaskName:(const char*)arg1 filePath:(id)arg2 ;
-(NSDate *)reportStart;
-(void)setReportStart:(NSDate *)arg1 ;
@end

