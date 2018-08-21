/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray, NSArray, AXTestingRouteDescription;

@interface VoiceOverAudioController : AccessibilityBaseListController {

	NSMutableArray* _outputDeviceSpecifiers;
	NSArray* _testingPorts;
	AXTestingRouteDescription* _testingRoute;

}

@property (nonatomic,retain) NSArray * testingPorts;                                //@synthesize testingPorts=_testingPorts - In the implementation block
@property (nonatomic,retain) AXTestingRouteDescription * testingRoute;              //@synthesize testingRoute=_testingRoute - In the implementation block
-(void)setSoundEffectsMuted:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffectsMuted:(id)arg1 ;
-(void)setAudioDuckingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)audioDuckingEnabled:(id)arg1 ;
-(void)setRouteToSpeakerForPhoneCalls:(id)arg1 specifier:(id)arg2 ;
-(id)routeToSpeakerForPhoneCalls:(id)arg1 ;
-(void)_handleOutputDeviceList;
-(id)_interestingOutputDevices;
-(id)_currentRouteForOutput;
-(BOOL)_channelCanBeToggled:(id)arg1 ;
-(AXTestingRouteDescription *)testingRoute;
-(NSArray *)testingPorts;
-(void)setTestingPorts:(NSArray *)arg1 ;
-(void)setTestingRoute:(AXTestingRouteDescription *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(id)specifiers;
@end

