/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@class DiagCollectionClient, NSMutableDictionary, NSString;

@interface DiagnosticsController : NSObject <ConfigurableObjectProtocol> {

	DiagCollectionClient* collector;
	NSMutableDictionary* _actionsDict;
	NSMutableDictionary* _settingsDict;

}

@property (nonatomic,retain) NSMutableDictionary * actionsDict;               //@synthesize actionsDict=_actionsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * settingsDict;              //@synthesize settingsDict=_settingsDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)configureClass:(id)arg1 ;
+(id)actionsMap;
+(id)settingsMap;
+(id)loggingStateCache;
+(id)consolidatedLogLevelSetsFromActions:(id)arg1 ;
+(BOOL)_loadLoggingSupport;
+(id)defaultsDictionaryWithAlwaysRunActions:(id)arg1 ;
+(id)actionsDictionaryForProcess:(id)arg1 logLevel:(id)arg2 diagnosticExtensions:(id)arg3 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)validateDiagnosticsConfiguration;
-(BOOL)validateActionsDictionary;
-(BOOL)validateSettingsDictionary;
-(BOOL)validateActionsDictionaryContent:(id)arg1 identifier:(id)arg2 ;
-(BOOL)validateSettingsNodeDictionary:(id)arg1 identifier:(id)arg2 isDefault:(BOOL)arg3 ;
-(BOOL)validateSettingsNodeContents:(id)arg1 identifier:(id)arg2 ;
-(NSMutableDictionary *)settingsDict;
-(NSMutableDictionary *)actionsDict;
-(void)consolidateLoggingLevelsIntoSet:(id)arg1 withCurrentState:(id)arg2 ;
-(void)applyLogLevelSets:(id)arg1 ;
-(void)applyLogLevel:(id)arg1 forIdentifier:(id)arg2 logSettingType:(unsigned long long)arg3 ;
-(BOOL)validateOSLogPreferencesProtocol:(id)arg1 ;
-(id)diagActionsForSignature:(id)arg1 ;
-(void)raiseLoggingForActions:(id)arg1 identifier:(id)arg2 ;
-(void)lowerLoggingForIdentifier:(id)arg1 ;
-(id)diagnosticExtensionsForDiagnosticCase:(id)arg1 ;
-(void)raiseLoggingForDiagnosticCase:(id)arg1 ;
-(void)lowerLoggingForDiagnosticCase:(id)arg1 ;
-(void)collectDEPayloadsForDiagnosticCase:(id)arg1 parameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)purgeDEPayloadsForDiagnosticCaseIdentifiers:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)purgeCollectedDEPayloads:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setActionsDict:(NSMutableDictionary *)arg1 ;
-(void)setSettingsDict:(NSMutableDictionary *)arg1 ;
@end

