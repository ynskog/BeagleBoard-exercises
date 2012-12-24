// This is a 16x24 icon of Tux's face represented 
// as bit reversed unsigned characters

// [0000000000000000        0000      0000          ]
// [000000000000            00                      ]
// [0000000000      0000000000    00    00          ]
// [0000000000      0000000000      00  00          ]
// [0000000000      00000000        00    00        ]
// [0000000000      00000000              00        ]
// [000000000000                      00  0000      ]
// [000000000000000000  0000          00    0000    ]
// [000000000000000000000000            00  0000    ]
// [0000000000000000000000              00    0000  ]
// [0000000000000000000000              00    0000  ]
// [00000000000000        00            00  000000  ]
// [000000000000    00000000            00  000000  ]
// [000000000000    00000000            00000000    ]
// [000000000000    000000          00000000        ]
// [00000000000000          0000    000000          ]

static unsigned char icon[] = {255, 48, 6, 
63, 16, 0, 
31, 159, 4, 
31, 31, 5, 
31, 15, 9, 
31, 15, 8, 
63, 0, 26, 
255, 13, 50, 
255, 15, 52, 
255, 7, 100, 
255, 7, 100, 
127, 8, 116, 
63, 15, 116, 
63, 15, 60, 
63, 7, 15, 
127, 48, 7
};