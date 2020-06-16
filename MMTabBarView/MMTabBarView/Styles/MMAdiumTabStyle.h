//
//  MMAdiumTabStyle.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 5/26/06.
//  Copyright 2006 Kent Sutherland. All rights reserved.
//

#if __has_feature(modules)
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif
#import "MMTabStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMAdiumTabStyle : NSObject <MMTabStyle>
{
	NSImage					*_closeButton;
	NSImage					*_closeButtonDown;
	NSImage					*_closeButtonOver;
	NSImage					*_closeDirtyButton;
	NSImage					*_closeDirtyButtonDown;
	NSImage					*_closeDirtyButtonOver;
	NSImage					*_gradientImage;
	
	BOOL _drawsUnified;
	BOOL _drawsRight;
}

@property (assign) BOOL drawsUnified;
@property (assign) BOOL drawsRight;

@end

NS_ASSUME_NONNULL_END
