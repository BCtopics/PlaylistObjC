//
//  DMNSong.h
//  PlaylistObjC
//
//  Created by Bradley GIlmore on 5/1/17.
//  Copyright © 2017 Bradley Gilmore. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMNSong : NSObject

- (instancetype)initWithTitle:(NSString *)title artist:(NSString*)artist;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *artist;

@end
