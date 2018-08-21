/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, NSString;

@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* _appWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;              //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_metadataFromProxy:(id)arg1 didInstall:(BOOL)arg2 ;
+(id)_identifierFromProxy:(id)arg1 ;
+(id)_dateFromProxy:(id)arg1 ;
+(id)_eventWithAppProxy:(id)arg1 didInstall:(BOOL)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(void)_applicationsDidChange:(id)arg1 didInstall:(BOOL)arg2 ;
-(id)init;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
@end

