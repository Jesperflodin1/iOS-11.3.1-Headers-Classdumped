/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, XCTRunnerAutomationSession, XCUIAccessibilityInterface;
@class NSObject, XCUIApplicationImpl, XCElementSnapshot, XCUIApplicationMonitor, XCAccessibilityElement;

@interface XCUIApplicationProcess : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _accessibilityActive;
	unsigned long long _applicationState;
	int _processID;
	id _token;
	int _exitCode;
	BOOL _eventLoopHasIdled;
	BOOL _hasReceivedEventLoopHasIdled;
	BOOL _animationsHaveFinished;
	BOOL _hasReceivedAnimationsHaveFinished;
	BOOL _hasExitCode;
	BOOL _hasCrashReport;
	XCUIApplicationImpl* _applicationImplementation;
	id<XCTRunnerAutomationSession> _automationSession;
	XCElementSnapshot* _lastSnapshot;
	XCUIApplicationMonitor* _applicationMonitor;
	id<XCUIAccessibilityInterface> _axInterface;

}

@property (assign) BOOL eventLoopHasIdled; 
@property (assign) BOOL hasReceivedEventLoopHasIdled; 
@property (assign) BOOL animationsHaveFinished; 
@property (assign) BOOL hasReceivedAnimationsHaveFinished; 
@property (retain) XCUIApplicationMonitor * applicationMonitor;                       //@synthesize applicationMonitor=_applicationMonitor - In the implementation block
@property (retain) id<XCUIAccessibilityInterface> axInterface;                        //@synthesize axInterface=_axInterface - In the implementation block
@property (assign,nonatomic) int processID; 
@property (assign,nonatomic) unsigned long long applicationState; 
@property (readonly) BOOL running; 
@property (readonly) BOOL suspended; 
@property (readonly) BOOL background; 
@property (readonly) BOOL foreground; 
@property (assign,nonatomic) BOOL accessibilityActive; 
@property (retain) id token; 
@property (assign) int exitCode; 
@property (assign) BOOL hasExitCode;                                                  //@synthesize hasExitCode=_hasExitCode - In the implementation block
@property (assign) BOOL hasCrashReport;                                               //@synthesize hasCrashReport=_hasCrashReport - In the implementation block
@property (retain) id<XCTRunnerAutomationSession> automationSession;                  //@synthesize automationSession=_automationSession - In the implementation block
@property (retain) XCElementSnapshot * lastSnapshot;                                  //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (assign) XCUIApplicationImpl * applicationImplementation;                   //@synthesize applicationImplementation=_applicationImplementation - In the implementation block
@property (copy,readonly) XCAccessibilityElement * accessibilityElement; 
+(id)keyPathsForValuesAffectingRunning;
+(id)keyPathsForValuesAffectingSuspended;
+(id)keyPathsForValuesAffectingBackground;
+(id)keyPathsForValuesAffectingForeground;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(XCUIApplicationImpl *)applicationImplementation;
-(BOOL)hasExitCode;
-(BOOL)hasCrashReport;
-(void)setHasCrashReport:(BOOL)arg1 ;
-(void)setExitCode:(int)arg1 ;
-(void)setAxInterface:(id<XCUIAccessibilityInterface>)arg1 ;
-(id)initWithApplicationMonitor:(id)arg1 axInterface:(id)arg2 ;
-(id)_queue_description;
-(void)_awaitKnownApplicationState;
-(id<XCUIAccessibilityInterface>)axInterface;
-(void)setHasExitCode:(BOOL)arg1 ;
-(void)setEventLoopHasIdled:(BOOL)arg1 ;
-(void)setHasReceivedEventLoopHasIdled:(BOOL)arg1 ;
-(void)setAnimationsHaveFinished:(BOOL)arg1 ;
-(void)setHasReceivedAnimationsHaveFinished:(BOOL)arg1 ;
-(BOOL)eventLoopHasIdled;
-(BOOL)animationsHaveFinished;
-(BOOL)accessibilityActive;
-(void)setAutomationSession:(id<XCTRunnerAutomationSession>)arg1 ;
-(XCAccessibilityElement *)accessibilityElement;
-(void)setAccessibilityActive:(BOOL)arg1 ;
-(void)setApplicationImplementation:(XCUIApplicationImpl *)arg1 ;
-(BOOL)hasReceivedEventLoopHasIdled;
-(BOOL)hasReceivedAnimationsHaveFinished;
-(void)waitForQuiescenceIncludingAnimationsIdle:(BOOL)arg1 ;
-(void)waitForAutomationSession;
-(void)acquireBackgroundAssertion;
-(void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1 ;
-(id<XCTRunnerAutomationSession>)automationSession;
-(id)init;
-(id)description;
-(unsigned long long)applicationState;
-(BOOL)background;
-(id)shortDescription;
-(void)setLastSnapshot:(XCElementSnapshot *)arg1 ;
-(XCElementSnapshot *)lastSnapshot;
-(BOOL)running;
-(BOOL)foreground;
-(id)token;
-(void)setToken:(id)arg1 ;
-(XCUIApplicationMonitor *)applicationMonitor;
-(void)setApplicationMonitor:(XCUIApplicationMonitor *)arg1 ;
-(void)setProcessID:(int)arg1 ;
-(void)setApplicationState:(unsigned long long)arg1 ;
-(int)exitCode;
-(BOOL)suspended;
-(void)terminate;
-(int)processID;
@end
